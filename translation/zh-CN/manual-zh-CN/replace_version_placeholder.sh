#!/bin/bash

DFT_VERSION=$(cargo read-manifest | jq -r .version)

jq .[1] | jq '.sections[0].Chapter.content |= sub("DFT_VERSION_HERE"; "'$DFT_VERSION'")'
