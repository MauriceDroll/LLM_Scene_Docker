document.addEventListener('DOMContentLoaded', function() {
    document.getElementById('send-btn').addEventListener('click', function() {
        var userInput = document.getElementById('user-input').value;
        response_llm = ""

        if (userInput.trim() !== '') {
            addMessage(userInput, 'user');
            document.getElementById('user-input').value = '';
        } else {
            userInput = "";
        }

        let data = { user_input: userInput };

        fetch('/button_click', {
            method: 'POST',
            headers: {
                'Content-Type': 'application/json'
            },
            body: JSON.stringify(data)
        })
        .then(response => response.json())
        .then(data => {
            console.log('Success:', data);

            let response_llm = {
                received: JSON.stringify(data.received)
            };
            
            // Überprüfen, ob response_llm.received definiert und ein Array ist
            if (response_llm.received && Array.isArray(response_llm.received)) {
                let formattedMessage = 'Diese Objekte werden gepackt: ' + response_llm.received.join(', ');
                addMessage(formattedMessage, 'bot');
            } 
            else if (response_llm.received && !Array.isArray(response_llm.received)) {
                let formattedMessage = 'Diese Objekte werden gepackt: ' + response_llm.received.replace(/[\[\]\"',]/g,'')
                alert(formattedMessage);
                addMessage(formattedMessage, 'bot');

            }
            else {
                addMessage('Diese Objekte werden gepackt: Keine Objekte', 'bot');
                console.error('response_llm.received ist kein Array oder nicht definiert:', response_llm.received);
            }

            //response_llm = data;
            //print_values = JSON.stringify(response_llm.received);
            //addMessage('Diese Objekte werden gepackt: '+ print_values.join(', '), 'bot');
        })
        .catch((error) => {
            console.error('Error:', error);
        });
        
        // Simulate bot response
        setTimeout(function() {
            addMessage('Das LLM bearbeitet gerade ihre Anfrage!', 'bot');

        }, 1000);
    });
});

function submitFormOnEnter(event) {
    if (event.key === 'Enter') {
        document.getElementById('send-btn').click();
    }
}


function addMessage(text, sender) {
    var message = document.createElement('div');
    message.className = 'message ' + (sender === 'user' ? 'user-message' : 'bot-message');
    message.textContent = text;

    var chatBox = document.getElementById('chat-box');
    chatBox.appendChild(message);
    chatBox.scrollTop = chatBox.scrollHeight;
}


// to do :

// timer für Reload vom Bild!