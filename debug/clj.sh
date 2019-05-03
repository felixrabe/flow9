#!/bin/bash

set -e

if [ `uname` == Darwin ]; then
    READLINK=greadlink
else
    READLINK=readlink
fi

SCRIPT_DIR=$(dirname "$($READLINK -e "$0")")

BASE_DIR=$($READLINK -e "$SCRIPT_DIR/..")
DEBUG=$BASE_DIR/debug

exec java -Xms128m -Xmx768m -classpath "$DEBUG/clojure-1.2.0.jar:$DEBUG/clojure-contrib-1.2.0.jar:$DEBUG" clojure.main "$@"
