# Sensors read mongoose app

## Overview

app to read info from sensors, based on mongoose OS

## How to run locally / make changes

1. Install mongoose os https://mongoose-os.com/docs/mongoose-os/quickstart/setup.md
2. git clone this repo
3. cd to you repo dir from `mos`
4. `mos call Sys.GetInfo` - will show you device's IP
5. if there is no IP, connect it to Wifi with `mos wifi your-network password`
6. go to `IP.address.here/rpc/TempHumid.Read`
