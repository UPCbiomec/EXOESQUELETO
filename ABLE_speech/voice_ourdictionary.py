import os
from os import path
from pocketsphinx import pocketsphinx
from pocketsphinx import Decoder
import speech_recognition as sr
from time import sleep


MODELDIR = "BIOMEC_DICTIONARY"

config = Decoder.default_config()
config.set_string('-hmm', path.join(MODELDIR, 'acoustic-model'))
config.set_string('-lm', path.join(MODELDIR, '4177.lm'))
config.set_string('-dict', path.join(MODELDIR, '4177.dict'))
config.set_string("-logfn", os.devnull)
decoder = Decoder(config)

commands = [
		 'DOWN',
		 'GO',
		 'LEFT',
		 'RIGHT',
		 'STOP',
		 'UP'
]

def getCommand(phrase, commands=commands):
	for i in range(len(commands)):
		if phrase.find(commands[i]) != -1:
			return (commands[i])

def callback(recognizer, audio):
	print "ABLE is recognizing..."
	raw_data = audio.get_raw_data(convert_rate=16000, convert_width=2)
	decoder.start_utt()
	decoder.process_raw(raw_data, False, True)
	decoder.end_utt()
	hypothesis = decoder.hyp()
	try:
		HYPOTESIS = hypothesis.hypstr.split()
		RESULT = getCommand(hypothesis.hypstr)
		print HYPOTESIS, RESULT
                if(RESULT=="GO"):
                  print("ABLE: MOTORS ARE STARTING")
                  sleep(2) #time in seconds
                  print("ABLE: MOTORS ARE READY")
                elif(RESULT=="STOP"):
                  print("ABLE: MOTORS ARE STOPPING")
                  sleep(2) #time in seconds
                  print("ABLE: MOTORS ARE STOPPED")
                elif(RESULT=="DOWN"):
                  print("ABLE: YOU ARE SITTING DOWN")
                  sleep(2) #time in seconds
                  print("ABLE: YOU ARE SITTED DOWN")
                elif(RESULT=="UP"):
                  print("ABLE: YOU ARE STANDING UP")
                  sleep(2) #time in seconds
                  print("ABLE: YOU ARE STANDED UP")
                elif(RESULT=="LEFT"):
                  print("ABLE: YOU ARE MOVING YOUR LEFT LEG")
                  sleep(2) #time in seconds
                  print("ABLE: LEFT LEG MOVED")
                elif(RESULT=="RIGHT"):
                  print("ABLE: YOU ARE MOVING YOUR RIGHT LEG")
                  sleep(2) #time in seconds
                  print("ABLE: RIGHT LEG MOVED")
                else:
                  print("DOESNT EXIST ACTION REQUIERED")

	except:
		print "nothing recognized"

r = sr.Recognizer()
r.energy_threshold = 1000 # minimum audio energy to consider for recording
r.pause_threshold = 0.25 # seconds of non-speaking audio before a phrase is cons$
r.phrase_threshold = 0.15 # minimum seconds of speaking audio before we conside$
r.non_speaking_duration = 0.25 # seconds of non-speaking audio to keep on both $
with sr.Microphone() as source:
   print("Please wait. Calibrating microphone...")
   # listen for 5 seconds and create the ambient noise energy level
   r.adjust_for_ambient_noise(source, duration=5)
try:
	
	print "ABLE is listening..."
	stop_listen = r.listen_in_background(source, callback)

	while True:
		pass
except:
	print "ABLE SAYS BYE..."
    



