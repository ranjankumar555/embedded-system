import socket

# 1. create a socket object
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# 2. connect to the server
host = '127.0.0.1'
port = 9999
client_socket.connect((host, port))

print("Connected to the server!")

# 3. Exchange data
while True:
    # send data to the server
    message = input("Enter message to send (type 'exit' to quit): ")
    if message.lower() == 'exit':
            break
    client_socket.send(message.encode())

    # Receive response from the server
    response  = client_socket.recv(1024).decode()
    print(f"Server says: {response}")

# 4. close the connection
client_socket.close()

