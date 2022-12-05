# exercise how to read D3PD ntuple
* [Setup](#setup)
* [Run](#run)

---

## Setup

Set up a directory for your project, set up the environment and acquire the repository.  
```bash
git clone https://github.com/olfedin/minbias.git
cd minbias 
mkdir build
cd build
cmake ../
make
 
---
```

## Run

To run programm 
```bash

 ./minbias -h

Usage: minbias  <options>
        -f <filename>   Run on ROOT file <filename> or list of file
        -n <printevnt>  Print message every n events
        -e <numofevnt>  Number of events to process  
        -h              Print this message

```
