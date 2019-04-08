#!/usr/bin/env python
# -*- coding: utf-8 -*-

from twilio.rest import Client
import sys

client = Client("AC33909fa8c45af58844f316dfa4168972", "e1e3ae7a24cbf94e133c5f6afbe5f717")

def messageSender(message):
    message1= str(message)
    client.messages.create(to="+50689476456",from_="+12018491333",body=message1)


messageSender(sys.argv[1])
