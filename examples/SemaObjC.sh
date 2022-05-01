#!/bin/bash

BASE_DIR=$(git rev-parse --show-toplevel)
TMP_DIR=$(mktemp -d)

fd -e h -e m . "${BASE_DIR}/examples/SemaObjC" -x tree-sitter parse {} --quiet | perl -pe 's/\d+ ms\s+\((ERROR|MISSING [^\[]+) \[(\d+),.*$/$2/' | perl -pe 's/\.(h|m)\s*(\d+)/.$1:$2/' > "${TMP_DIR}/temp.txt"
cat "${TMP_DIR}/temp.txt" | awk -F ":" '{print "echo \"###########\" && echo \"" $0 "\" && echo \"\" && "}' > "${TMP_DIR}/echo.txt"
cat "${TMP_DIR}/temp.txt" | awk -F ":" '{print $2}' | xargs -I {} sh -c 'seq -s"," `echo "{}-1" | bc` 2 `echo "{}+1" | bc` && echo ""' | perl -pe 's/,$/p/' | perl -pe "s/^/sed -n '/" | perl -pe "s/$/' /"  | perl -pe "s/-1,/0,/" > "${TMP_DIR}/sed.txt"
cat "${TMP_DIR}/temp.txt" | awk -F ":" '{print $1}' > "${TMP_DIR}/file.txt"
paste "${TMP_DIR}/sed.txt" "${TMP_DIR}/file.txt" > "${TMP_DIR}/sed-file.txt"
paste "${TMP_DIR}/echo.txt" "${TMP_DIR}/sed-file.txt" > "${TMP_DIR}/run.sh"
sh "${TMP_DIR}/run.sh" > "${BASE_DIR}/examples/SemaObjC.txt"