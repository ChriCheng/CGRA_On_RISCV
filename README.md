# Graduation-project
Design of master controller for Reconfigurable computing Architecture based on RISC-V
## Acknowledgments

This project is based on [RISC-V-CPU](https://github.com/jasonlin316/RISC-V-CPU) by [Yi-Chien Lin](https://github.com/jasonlin316). Which is a 32-bit 5-stage pipelined RISC-V CPU that supports basic instructions and some vector arithmetic. 

## CGRA instruction extension
### STC
Store Data/Context to CGRA

| funct7[31:25] | rs2[24:20] | rs1[19:15] | funct3[14:12] | rd[11:7] | opcode[6:0] |
| :-----------: | :--------: | :--------: | :-----------: | :------: | :---------: |
|    0000000    |   xxxxx    |   xxxxx    |      001      |  xxxxxx  |   0001011   |

**Rs1**:Address in RSIC-V CPU  
**Rs2**:Storing data size in wors(32bits)  
**Rd**:Address in CGRA SPM




### LFC
Load Data from CGRA

| funct7[31:25] | rs2[24:20] | rs1[19:15] | funct3[14:12] | rd[11:7] | opcode[6:0] |
| :-----------: | :--------: | :--------: | :-----------: | :------: | :---------: |
|    0000000    |    xxxx    |    xxxx    |      010      |   xxxx   |   0001011   |

**Rs1**:Address in CGRA SPM  
**Rs2**:Loading data size in bytes  
**Rd**:Address in RISC-V CPU  

### SCA 
Start CGRA Acceleration

| funct7[31:25] | rs2[24:20] | rs1[19:15] | funct3[14:12] | rd[11:7] | opcode[6:0] |
| :-----------: | :--------: | :--------: | :-----------: | :------: | :---------: |
|    0000000    |    xxxx    |    xxxx    |      011      |   xxxx   |   0001011   |

**Rd**:Error code after acceleration



# 目前已知
## 需要修改stall、STC为取出数，在加写入顺序。 LFC就是直接LOAD、SCA直接取出EORR然后写。     


- [x] 初搞STC控制逻辑完成
- [ ] 需要修改stall
- [ ] 需要把老DMEM回接
- [ ] 需要写CGRA逻辑
- [ ] CGRA控制信号未写