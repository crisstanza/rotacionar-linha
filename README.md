# rotacionar-linha

Exercício de programação em C.



## Script de build: rotacionar-linha.sh

Comandos dispon&iacute;veis:

   ./rotacionar-linha.sh clean | build | run



### Create gh-pages:

```
git checkout --orphan gh-pages
git add .
git commit -m "Initial commit."
git push origin gh-pages
```



### Remove gh-pages:

```
git branch -D gh-pages
git push origin --delete gh-pages
```



### Sync gh-pages (DON'T DO THAT if you're using /docs folder for your gh-pages):

```
git push --force origin master:gh-pages
git reset --hard origin/gh-pages
```
