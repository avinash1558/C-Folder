def speak(str):
    import win32com.client
    speak=win32com.client.Dispatch('SAPI.SpVoice')
    speak.Speak(str)
speak('avinash sharmaa')