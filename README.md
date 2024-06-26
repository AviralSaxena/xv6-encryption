# Filesystem and Encryption

## Overview
This project involved collaborating in a team of two to update the xv6 filesystem to support file encryption and decryption. The main goals were to:
- Implement encryption and decryption system calls.
- Modify user applications to handle encrypted files appropriately.

## Project Details

### What We Accomplished:
- **System Calls**:
  - Implemented `encrypt(int fd, uint8 key)` for file encryption.
  - Implemented `decrypt(int fd, uint8 key)` for file decryption.
- **File Structure Updates**:
  - Added encrypted status to inode structures.
- **User Applications**:
  - Updated `cat.c`, `grep.c`, and `wc.c` to handle encrypted files by displaying an error message and returning -1.
- **Testing and Error Handling**:
  - Ensured proper error handling for attempts to encrypt already encrypted files and decrypt non-encrypted files.

## Conclusion
This project enhanced our understanding of encryption mechanisms in Unix.