use path
use str
use re


# functional helper
fn nth {|n| put [(all)][$n] }


# aliases
fn ls  {|@a| exa -F $@a }
fn la  {|@a| ls -a $@a }
fn ll  {|@a| ls -lgh --color-scale --git $@a }
fn lla {|@a| ll -a $@a }
fn cp  {|@a| e:cp -iv $@a }
fn mv  {|@a| e:mv -iv $@a }
fn rm  {|@a| e:rm -v $@a }
fn e   {|@a| nvim $@a }
fn se  {|@a| sudo nvim $@a }
fn re  {|@a| nvr --remote-silent $@a }
fn o   {|@a| setsid mimeo $@a }
fn ext {|@a| aunpack $@a }
fn u   {|@a| systemctl --user --no-block $@a }
fn a   {|@a| aria2c $@a }
fn t   {|@a| echo "Trashing" $@a; trash $@a }
fn s   {|@a| systemctl $@a }
fn ss  {|@a| sudo systemctl $@a }


# functions
fn d {|name @dir|
  fd -c always -t d $name (take 1 $dir) | fzf --no-multi
}

fn f {|name @dir|
  fd -c always -t f -t l $name (take 1 $dir) | fzf --no-multi
}

fn br {|@a|
  var tmp = (mktemp)
  try {
    broot --outcmd $tmp $@a
  } else {
    eval (cat $tmp | slurp)
  } finally {
    (external rm) -f $tmp
  }
}

fn up {|@arg|
  var count = 1
  if (not-eq $arg []) { set count = $arg[0] }
  cd (str:join "/" [(repeat $count "..")])
}

fn nvim-server {||
  if (has-env NVIM_LISTEN_ADDRESS) {
    echo "Server environment already set"
    return
  }
  var socket_path = "/tmp/nvim_sockets/"
  mkdir -p $socket_path
  var socket = (pwd | re:replace "[[:^alpha:]]" "" (all))
  set-env NVIM_LISTEN_ADDRESS $socket_path$socket
}

# poor mans vcs
fn keep {|f|
  try {
    var latest = (order &reverse=$true [$f.*[number]] | take 1)
    cmp -s $f $latest
    echo $f "not modified" >&stderr
  } catch e {
    var ext = (path:ext $f)
    var bname = (str:trim-suffix (path:base $f) $ext)
    cp -va $f $bname"_"(date '+%s')$ext
  }
}

# create and return current clutter folder
fn cl {
  var parent = ~/clutter
  var week = (date '+%G/%V')
  mkdir -p $parent"/"$week
  ln -sfT $week $parent"/current"
  put $parent"/"$week
}

# set terminal title
fn set_title {|title|
  printf "\e]2;%s\a" $title
}

# replace symlink with target
fn unlink {|a|
  if (not (or (path:is-regular $a) (path:is-dir $a))) {
    var path = (path:eval-symlinks $a)
    rm $a
    cp -r $path $a
  }
}


# abbreviations
{
  var f = {|l r| set edit:abbr[$l] = $r }
  $f '||' '| bat'
  $f '>dn' '2>/dev/null'
}


# hooks
set edit:before-readline = [{ set_title "elv "(path:base $pwd) }]
set edit:after-readline = [$set_title~]
set after-chdir = [{|_| printf "\e]7;file://%s\a" $pwd }]


# keybindings
{
  var f = {|k f| set edit:insert:binding[$k] = $f }
  $f Ctrl-H $edit:history:fast-forward~
  $f Ctrl-L $edit:clear~
  $f Ctrl-B $edit:move-dot-left-small-word~
  $f Ctrl-W $edit:move-dot-right-small-word~
  $f Ctrl-K $edit:kill-line-right~
  $f Ctrl-D {
    if (> (count $edit:current-command) 0) { edit:kill-small-word-right
    } else { edit:return-eof }
  }
  $f Alt-n $edit:navigation:start~
  $f Alt-l $edit:location:start~
}


# prompt
use prompt
set edit:prompt  = $prompt:main_prompt~
set edit:rprompt = $prompt:git_prompt~


# completions
set edit:completion:matcher[''] = {|seed| edit:match-prefix $seed &ignore-case=$true }

use comp/pacman
use comp/pass
use comp/systemctl
use comp/man

{
  var f = {|k f| set edit:completion:arg-completer[$k] = $f }
  $f paru $edit:completion:arg-completer[pacman]
  $f s $edit:completion:arg-completer[systemctl]
  $f sudo $edit:complete-sudo~
  $f doas $edit:complete-sudo~
}


# environment
set value-out-indicator = ':> '
eval (dircolors -c ~/.dircolors | sed 's/setenv/set-env/')
set-env SUDO_PROMPT "[sudo] "$E:USER@(hostname)"'s passwd: "
stty -ixon # disable ctrl-s
set-env LESS "-i"
