# Get the base Ubuntu image from Docker Hub
FROM ubuntu:latest

# Update apps on the base image
RUN apt-get -y update && apt-get install -y

RUN apt install -y g++

RUN g++ --version

RUN mkdir -p /usr/src/cpptest

# Copy the current folder which contains C++ source code to the Docker image under /usr/src
COPY . /usr/src/cpptest

# Specify the working directory
WORKDIR /usr/src/cpptest

RUN g++ -o main main.cc Hello.cc

# Run the output program from the previous step
CMD ["./main"]