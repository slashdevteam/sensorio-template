# SensorIO template project

1. Clone this repository
```bash
git clone https://github.com/slashdevteam/sensorio-template.git
```
2. Initialize submodules

  ```bash
  cd sensorio-template
  git submodule update --init --recursive
  ```

3. Compile

- debug:
```bash
mbed compile --profile tools/debug.json
```

- release:
```bash
mbed compile --profile tools/release.json
```
