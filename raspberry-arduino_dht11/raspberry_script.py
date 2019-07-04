import serial
ser = serial.Serial('/dev/ttyACM0', 9600)
import SimpleHTTPServer
import SocketServer

PORT = 8080
class myHandler(SimpleHTTPServer.SimpleHTTPRequestHandler):
    #Handler for the GET requests
    def do_GET(self):
        self.send_response(200)
        self.send_header('Content-type','text/html')
        self.end_headers()
        # Send the html message
        self.wfile.write("Hello World !")
        return

Handler = myHandler

httpd = SocketServer.TCPServer(("", PORT), Handler)
print("serving at port", PORT)
httpd.serve_forever()

while 1:
    if(ser.in_waiting > 0):
        line = ser.readline()
        temp, humid = line.split("|")
        print("t = ", temp, "\n")
        print("h = ", humid, "\n")
