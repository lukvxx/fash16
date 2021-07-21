# fash16

## Description
Returns a hash from first argument

## cloning and compiling

### cloning
to clone this repo use `git clone https://github.com/DevManu-de/fash16.git --recursive`

### compiling
type `make` in the root of the project, the executable will be `output/fash16`
if an error like
`
make: ctags: No such file or directory
make: *** [Makefile:35: fash16] Error 127
`

this is ok, the executable was created anyways.

## Usage
fash16 takes one argument and this is the string to be hashed. If no argument was supplied fash16 exits with code 1.
