# Real Time Operating System development from scratch

Developing Real-Time Operating System on ek-tm4c123gxl without using any IDE from scratch to understand and get hands-on experience on RTOS kernel internals and OS support features of the Cortex-M architecture.

Commands:
- **Clean project**:`<ARGUMENTS> <PATH OF PROJECT'S ROOT FOLDER>`/build_scripts/build.sh clean
- **Build project**:`<ARGUMENTS> <PATH OF PROJECT'S ROOT FOLDER>`/build_scripts/build.sh build `APP`
- **Debug project using GDB**:`<ARGUMENTS> <PATH OF PROJECT'S ROOT FOLDER>`/build_scripts/build.sh debug `APP`
- **Dissassemble** :`<ARGUMENTS> <PATH OF PROJECT'S ROOT FOLDER>`/build_scripts/build.sh disass `APP` `FUNCTION`

_Note:_
- _`APP` can be selected from test_applications directory. e.g. `toggle_led`_
- _`FUNCTION` can be any function in the project. e.g. `main`_

Documents related to ek-tm4c123gxl:

- https://www.ti.com/lit/ds/spms376e/spms376e.pdf
