import serial
import SimpleHTTPServer
import SocketServer
import json
import time

ser = serial.Serial('/dev/ttyACM0', 9600)
PORT = 8083
class myHandler(SimpleHTTPServer.SimpleHTTPRequestHandler):
    #Handler for the GET requests
    def do_GET(self):
        if(ser.in_waiting > 0):
            line = ser.readline()
            temp, humid = line.split("|")
            print("t = ", temp, "\n")
            print("h = ", humid, "\n")
        self.send_response(200)
        self.send_header('Content-type','application/json')
        self.end_headers()
        # Send the html message
        time.sleep(3)
        data = {'temp': temp, 'humid': humid.strip()}
        self.wfile.write(json.dumps(data))
        return

Handler = myHandler

httpd = SocketServer.TCPServer(("", PORT), Handler)
print("serving at port", PORT)
httpd.serve_forever()
