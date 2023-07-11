## FILE IO

File Input/Output (I/O) is the process of reading data from files or writing data to files in a computer system. It is a crucial part of many computer applications, as it allows programs to store and retrieve data from files, which are a persistent storage medium.

# Types of Files

There are two main types of files that can be read or written using file I/O in most programming languages:

* Text files: These files store data in plain text format, such as letters, numbers, and symbols. Examples of text files include configuration files, log files, and data files that contain textual data.
* Binary files: These files store data in a binary format, which means that the data is represented as a series of 0s and 1s. Binary files are used to store non-textual data, such as images, audio, and video.

# File I/O Operations

File I/O operations typically involve the following steps:

1. Opening a file: Before you can read from or write to a file, you need to open it. This is done using a file object, which represents the file in the program's memory.
2. Reading from a file: Once a file is opened, you can read data from it using `read()`.
3. Writing to a file: You can also write data to a file using `write()`.
4. Closing a file: After you are done with a file, you need to close it. This is done using the `close()` method.


# FIle Modes

When opening a file, you need to specify the mode in which the file should be opened. The mode determines whether the file will be opened for reading, writing, or both, and whether the file will be created if it doesn't exist. The most common file modes are:

* 'r': Read mode. Opens a file for reading. If the file doesn't exist, an error is raised.
* 'w': Write mode. Opens a file for writing. If the file doesn't exist, it is created. If it does exist, its contents are truncated.
* 'a': Append mode. Opens a file for writing. If the file doesn't exist, it is created. If it does exist, new data is written to the end of the file.
* 'x': Exclusive mode. Opens a file for writing. If the file already exists, an error is raised.
