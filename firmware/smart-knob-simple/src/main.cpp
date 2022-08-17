#include <Arduino.h>
#include <SimpleFOC.h>

#include "display_task.h"
#if SK_DISPLAY
static DisplayTask display_task = DisplayTask(0);
static DisplayTask* display_task_p = &display_task;
#else
static DisplayTask* display_task_p = nullptr;
#endif

static QueueHandle_t knob_state_debug_queue;

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}