""""""""""""""""
" Vimrc
"
""""""""""""""""
set mouse=a 
"set relativenumber
set number
"set colorscheme wombat256mod
"set foldmethod=indent
"set spell
"set shell 
set title
"set background=dark
set cursorline
set encoding=utf8 
syntax enable
autocmd BufWinLeave *.* mkview
autocmd BufWinEnter *.* silent loadview
