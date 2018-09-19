/**
 * @file event_recharge.h
 *
 * @copyright 2017 3081 Staff, All rights reserved.
 */

#ifndef PROJECT_ITERATION1_SRC_EVENT_RECHARGE_H_
#define PROJECT_ITERATION1_SRC_EVENT_RECHARGE_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <stdio.h>
#include "src/event_base_class.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
NAMESPACE_BEGIN(csci3081);

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief @todo
 */
class EventRecharge : public EventBaseClass {
 public:
  EventRecharge(void) {}

  void EmitMessage(void) { printf("Robot Battery recharged!\n"); }
};

NAMESPACE_END(csci3081);

#endif  // PROJECT_ITERATION1_SRC_EVENT_RECHARGE_H_
