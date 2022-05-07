# Taken from the Elvish homepage https://elv.sh

curl https://api.github.com/repos/elves/elvish/issues |
  from-json | all (one) |
  each {|x| echo (exact-num $x[number]): $x[title] } |
  head -n 5

if $false { echo good } else { echo bad }

for x [lorem ipsum] {
  echo $x.rs
}

 try {
  fail 'bad error'
} except e {
  echo error $e
} else {
  echo ok
}
