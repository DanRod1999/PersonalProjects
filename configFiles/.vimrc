""""""""""""""""
" Vimrc
"
""""""""""""""""

syntax enable 

set number

set title

set ruler

set autoindent

set encoding=utf8 

set ignorecase
set smartcase

set autowrite

set showcmd

set wildmenu

set showmatch

set lazyredraw

set incsearch
set hlsearch

set ttyfast

set showmode

nnoremap <leader><space> :nohlsearch<CR>

set foldenable

set foldlevelstart=10

nnoremap <space> za

set foldmarker=nnn,mmm

set mouse=a

autocmd BufWinLeave *.* mkview
autocmd BufWinEnter *.* silent loadview

