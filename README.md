# Graduation-project
Design of master controller for Reconfigurable computing Architecture based on RISC-V
## Acknowledgments

This project is based on [RISC-V-CPU](https://github.com/jasonlin316/RISC-V-CPU) by [Yi-Chien Lin](https://github.com/jasonlin316). Which is a 32-bit 5-stage pipelined RISC-V CPU that supports basic instructions and some vector arithmetic. 

## CGRA instruction extension
### STC
Store Data/Context to CGRA

| funct7  |  rs2  |  rs1  | funct3 |  rd   | opcode  |
| :-----: | :---: | :---: | :----: | :---: | :-----: |
| 0000000 | xxxxx | xxxxx |  000   | xxxxx | 0001011 |

**Rs1**:Address in RSIC-V CPU  
**Rs2**:Storing data size in bytes  
**Rd**:Address in CGRA SPM

↓ Not yet finished
---

### LFC
Load Data from CGRA

| funct7  |  rs2  |  rs1  | funct3 |  rd   | opcode  |
| :-----: | :---: | :---: | :----: | :---: | :-----: |
| 0000000 | xxxx  | xxxx  |  000   | xxxx  | 0001011 |

**Rs1**:Address in CGRA SPM
**Rs2**:Loading data size in bytes
**Rd**:Address in RISC-V CPU

### SCA 
Start CGRA Acceleration

| funct7  |  rs2  |  rs1  | funct3 |  rd   | opcode  |
| :-----: | :---: | :---: | :----: | :---: | :-----: |
| 0000000 | xxxx  | xxxx  |  000   | xxxx  | 0001011 |

**Rd**:Error code after acceleration