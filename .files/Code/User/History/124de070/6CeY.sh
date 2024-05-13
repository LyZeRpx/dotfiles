echo "Quelle est la capitale de la France ?"
PARIS="Paris"
read ans
if ["$ans" == "$PARIS" ]; then
    echo "Bonne réponse"
    else
    echo "Mauvaise réponse"
fi