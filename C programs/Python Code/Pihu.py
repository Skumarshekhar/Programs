# Import necessary libraries
import os
import pyaudio
import speech_recognition as sr
import pyttsx3
# Initialize the speech recognition and text-to-speech engines
recognizer = sr.Recognizer()
engine = pyttsx3.init()

# Set the voice and rate of the text-to-speech engine
engine.setProperty('voice', 'english')
engine.setProperty('rate', 150)

# Define a function to handle the speech recognition
def recognize_speech():
    # Get audio input from the microphone
    with sr.Microphone() as source:
        audio = recognizer.listen(source)

    # Try to recognize the speech using Google Speech Recognition
    try:
        text = recognizer.recognize_google(audio)
        return text
    except sr.UnknownValueError:
        return None

# Define a function to handle the text-to-speech
def speak_text(text):
    engine.say(text)
    engine.runAndWait()

# Main loop
while True:
    # Prompt the user to speak
    print("Pihu: What can I do for you?")
    speak_text("Hello I am Pihu, your personal assistant, What can I do for you?")
    print("Listening")

    # Try to recognize the speech
    text = recognize_speech()

    # If the speech was recognized, handle the request
    if text:
        if "hello" in text:
            print("Pihu: Hello! How are you today?")
            speak_text("Hello! How are you today?")
        elif "weather" in text:
            print("Pihu: The weather today is sunny and warm.")
            speak_text("The weather today is sunny and warm.")
        elif "goodbye" in text:
            print("Pihu: Goodbye! Have a nice day.")
            speak_text("Goodbye! Have a nice day.")
            break
        elif "name" in text:
            print("Your name is Sandip Kumar")
            speak_text("Hello Mr. Sandip Kumar, How are you.")
            break
        elif "food" in text:
            print("You should eat a healthy food")
            speak_text("You should eat healthy food thats why you become a healthy person")
            break
        elif "tatti" in text:
            print("Omprakash Kumar")
            speak_text("Omprakash such me ")
            break
        elif "who" in text:
            print("Pihu")
            speak_text("I am Pihu, Your personal assistant")
        else:
            print("Pihu: Sorry, I didn't understand your request.")
            speak_text("Sorry, I didn't understand your request.")
    else:
        print("Pihu: Sorry, I didn't hear anything.")
        speak_text("Sorry, I didn't hear anything.")
