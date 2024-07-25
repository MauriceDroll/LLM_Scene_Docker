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
            response_llm = data;
        })
        .catch((error) => {
            console.error('Error:', error);
        });
        
        // Simulate bot response
        setTimeout(function() {
            addMessage('LLM: Das ist eine Beispielantwort.', 'bot');
            addMessage(JSON.stringify(response_llm.received), 'bot');
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