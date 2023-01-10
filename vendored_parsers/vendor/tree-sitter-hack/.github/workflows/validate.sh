#!/bin/bash

if [ -n "$(git status --porcelain)" ]; then
    exit 1
fi
