#!/bin/bash

DFT_VERSION=$(cargo read-manifest | jq -r .version)

jq --arg version "$DFT_VERSION" '.[1] | walk(if type == "string" then gsub("DFT_VERSION_HERE"; $version) else . end)'
