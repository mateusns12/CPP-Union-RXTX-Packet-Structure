# RXTX Packet Structure using Unions

![Language](https://img.shields.io/badge/Language-C++20-1AFFFF?style=for-the-badge&logo=cplusplus)                    ![System](https://img.shields.io/badge/System-Android_TERMUX-47D147?style=for-the-badge&logo=android)

This code is made for testing operations of send, receive, copy and iterate over struct data, acessing its byte values using a union.

The purpose is to create the basic packet struct to be sent or received via SPI or I2C, between microcontrolers (C based).

# Notes

	- Using C++20 to test jthread.
	- Threads will be used to simulate 2 devices.
	- Developed in Termux.

# To-do
- [ ] Test async await to simulate events, instead of threads. 
- [ ] Test threadpool library.
- [ ] Create class Device_Handle to encapsulate thread functions.
