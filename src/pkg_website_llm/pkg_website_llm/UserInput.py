class UserInput:
    userInput_str = 'No Input'
    approval_str = 'No Approval'
    
    def getUserInput():
        return UserInput.userInput_str
    
    def setUserInput(input):
        UserInput.userInput_str = input
        
    def getApproval():
        return UserInput.approval_str
    
    def setApproval(approval):
        UserInput.approval_str = approval
