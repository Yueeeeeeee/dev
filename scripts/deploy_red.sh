#!/bin/bash

deployDirectory='~/models/SS19/'
completionScript='makeComplete'
target='pi@192.168.1.141'

ssh ${target} 'rm -r '${deployDirectory}'inc-gen'
ssh ${target} 'rm -r '${deployDirectory}'src-gen'
echo "Deleted old inc-gen and src-gen"

cd RaspberryPI/
scp -r inc-gen/ ${target}':'${deployDirectory}
scp -r src-gen/ ${target}':'${deployDirectory}
echo "Transfered new inc-gen and src-gen"
cd ..

ssh ${target} 'cd '${deployDirectory}' && ./'${completionScript}
echo "Done"
