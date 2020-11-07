#!/bin/bash

# Store URL in a variable
URL1="http://www.hivemq.com/demos/websocket-client/"

# Print some message
echo "** Opening $URL1 in Firefox **"

# Use firefox to open the URL in a new window
firefox -new-window $URL1 


# Store URL in a variable
URL2="https://script.google.com/macros/s/AKfycbyllu1XA4z2Ywxpc0ujVLfTuiEoCxbG2ezb_0_EOaDiPVRXUqw/exec"

# Print some message
echo "** Opening $URL2 in Firefox **"

# Use firefox to open the URL in a new window
firefox -new-window $URL2 

