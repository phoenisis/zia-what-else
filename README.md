<div align="justify">
Pour commencer rien ne vaut un petit descriptif général de l'architecture de notre API Zia. <br><br> 
Cette API vise à être la plus simple possible tout en restant extensible et facilement modifiable au fur et à mesure que vos commentaires viendront l'enrichir pendant toute la durée du Zia.<br>
Comme vous pouvez le constater dans l'UML, notre API est petite et les classes qu'elle utilise vont droit au but. En résumé, tout tourne autour d'une classe module qui utilise des directives traitant les requêtes et envoyant éventuellement des réponses également implémentées dans des classes. Nous allons décrire dans le détail chacune des classes. <br>
Notez que par abus de langage, à chaque fois que nous parlerons de bibliothèques dynamiques, nous abrégerons par DLL (qui de par la signification de l'acronyme se prête bien à cet abus de langage) mais il s'agit bien de bibliothèques dynamiques quel que soit le système cible sur lequel est compilé le Zia. <br>
</div>

=============
