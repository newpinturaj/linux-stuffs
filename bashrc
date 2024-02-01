#user defined alias
alias g++ = "g++ -Wall"

#user defined function
function rmex() {
  find ${1: .} -executable -type f -exec rm {} \;;
}