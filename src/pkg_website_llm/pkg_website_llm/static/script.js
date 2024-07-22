document.getElementById('send-btn').addEventListener('click', function() {
    var userInput = document.getElementById('user-input').value;
    if (userInput.trim() !== '') {
        addMessage(userInput, 'user');
        document.getElementById('user-input').value = '';
        
        // Simulate bot response
        setTimeout(function() {
            addMessage('LLM:Das ist eine Beispielantwort.LLM:Das ist eine Beispielantwort.LLM:Das ist eine Beispielantwort.LLM:Das ist eine Beispielantwort.LLM:Das ist eine Beispielantwort.LLM:Das ist eine Beispielantwort.', 'bot');
        }, 1000);
    }
});

function addMessage(text, sender) {
    var message = document.createElement('div');
    message.className = 'message ' + (sender === 'user' ? 'user-message' : 'bot-message');
    message.textContent = text;

    var chatBox = document.getElementById('chat-box');
    chatBox.appendChild(message);
    chatBox.scrollTop = chatBox.scrollHeight;
}
