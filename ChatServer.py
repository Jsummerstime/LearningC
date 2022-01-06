# import socket  #this works one way: server -> client

# s = socket.socket()

# host = "192.168.1.17"

# port = 12345
# s.bind((host, port))
# s.listen()
# c, addr = s.accept()
# while True:
    
#     msg = input("Jack:")
#     c.send(msg.encode())
#     if msg == 'quit':
#         c.close()

#version 2  # this version allows the client and server to communicate back and forth one at a time. Starting with the client

import socket  #the corresponding CLIENT is on another computer (ROS laptop)

s = socket.socket()

host = "192.168.1.17"

port = 12345
s.bind((host, port))
s.listen()
c, addr = s.accept()
while True:
    msg = c.recv(1024).decode()
    print(msg)
    msg = input("Jack:")
    c.send(msg.encode())
    if msg == 'quit':
        c.close()

        