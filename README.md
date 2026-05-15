# student-record-storing

This repository originally contained a C++ student-record file-stream example. It now also includes a FLIR thermal flash-method analysis workflow for perovskite/ITO/glass photovoltaic module experiments.

## FLIR thermal flash analysis

See [`thermal_flash_analysis/README.md`](thermal_flash_analysis/README.md) for the full workflow to:

- isolate the flash-only thermal signal from FLIR videos,
- process the supplied FLIR0626-FLIR0650 experimental log,
- export response CSV files, plots, and optional flash-only videos,
- estimate effective thermal diffusivity with the flash-method half-rise approximation.
