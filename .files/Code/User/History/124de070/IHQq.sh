echo "Quelle est la capitale de la France ?"
PARIS="Paris"
read ${ANSWER}
if ["$ANSWER" == "$PARIS" ]; then
    echo "Bonne réponse"
    else
    echo "Mauvaise réponse"
fi