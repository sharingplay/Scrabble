from twilio.rest import client
import sys

client = Client("ACd75ce3a33401fdadacc1faae48e6370a", "e5b36695a9d3072d6e785db7664490e9")

def messageSender(message):
    message1= str(message)
    client.messages.create(to="+50689797226",from_="+12063396834",body=message1)


messageSender(sys.argv[1])
