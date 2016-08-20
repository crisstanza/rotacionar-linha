# rotacionar-linha

Exercício de programa&ccedil;&atilde;o em C.



## Script de build: rotacionar-linha.sh

Comandos dispon&iacute;veis:

```
  ./rotacionar-linha.sh clean | build | run
```

Exemplo de uso da fun&ccedil;&atilde;o delay:

```
  ./rotacionar-linha.sh clean -s exemplo-delay build run
```



### GitHub Pages: https://crisstanza.github.io/rotacionar-linha/



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
