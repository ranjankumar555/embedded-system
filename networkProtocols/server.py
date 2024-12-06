import socket

# 1. Create a socket object
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# 2. Bind the socket to a specific address and port
host = '127.0.0.1'
port = 9999
server_socket.bind((host, port))

print(f"Server started at {host}:{port}")

# 3. Listening for incoming connections
server_socket.listen(5)
print("Waiting for a connection...")

# 4. Accept a connection
client_socket, client_address = server_socket.accept()
print(f"Connection established with {client_address}")

# 5. Exchange data
while True:
    # Receive data from the client
    data = client_socket.recv(1024).decode()
    if not data:
        print("Client disconnected.")
        break
    print(f"Client: {data}")

    # Send a response to the client
    message = input("Server: ")
    client_socket.send(message.encode())

# 6. Close the connection
client_socket.close()
server_socket.close()
