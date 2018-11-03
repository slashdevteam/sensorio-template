# SensorIO template project

1. Clone this repository
2. Initialize submodules

  ```bash
  cd sensorio-example
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
