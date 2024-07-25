// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llm_action_interfaces:action/LLM.idl
// generated code does not contain a copyright notice

#ifndef LLM_ACTION_INTERFACES__ACTION__DETAIL__LLM__BUILDER_HPP_
#define LLM_ACTION_INTERFACES__ACTION__DETAIL__LLM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llm_action_interfaces/action/detail/llm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llm_action_interfaces
{

namespace action
{

namespace builder
{

class Init_LLM_Goal_userinput
{
public:
  Init_LLM_Goal_userinput()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::llm_action_interfaces::action::LLM_Goal userinput(::llm_action_interfaces::action::LLM_Goal::_userinput_type arg)
  {
    msg_.userinput = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llm_action_interfaces::action::LLM_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::llm_action_interfaces::action::LLM_Goal>()
{
  return llm_action_interfaces::action::builder::Init_LLM_Goal_userinput();
}

}  // namespace llm_action_interfaces


namespace llm_action_interfaces
{

namespace action
{

namespace builder
{

class Init_LLM_Result_llmoutput
{
public:
  Init_LLM_Result_llmoutput()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::llm_action_interfaces::action::LLM_Result llmoutput(::llm_action_interfaces::action::LLM_Result::_llmoutput_type arg)
  {
    msg_.llmoutput = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llm_action_interfaces::action::LLM_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::llm_action_interfaces::action::LLM_Result>()
{
  return llm_action_interfaces::action::builder::Init_LLM_Result_llmoutput();
}

}  // namespace llm_action_interfaces


namespace llm_action_interfaces
{

namespace action
{

namespace builder
{

class Init_LLM_Feedback_progress
{
public:
  Init_LLM_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::llm_action_interfaces::action::LLM_Feedback progress(::llm_action_interfaces::action::LLM_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llm_action_interfaces::action::LLM_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::llm_action_interfaces::action::LLM_Feedback>()
{
  return llm_action_interfaces::action::builder::Init_LLM_Feedback_progress();
}

}  // namespace llm_action_interfaces


namespace llm_action_interfaces
{

namespace action
{

namespace builder
{

class Init_LLM_SendGoal_Request_goal
{
public:
  explicit Init_LLM_SendGoal_Request_goal(::llm_action_interfaces::action::LLM_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::llm_action_interfaces::action::LLM_SendGoal_Request goal(::llm_action_interfaces::action::LLM_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llm_action_interfaces::action::LLM_SendGoal_Request msg_;
};

class Init_LLM_SendGoal_Request_goal_id
{
public:
  Init_LLM_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LLM_SendGoal_Request_goal goal_id(::llm_action_interfaces::action::LLM_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LLM_SendGoal_Request_goal(msg_);
  }

private:
  ::llm_action_interfaces::action::LLM_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::llm_action_interfaces::action::LLM_SendGoal_Request>()
{
  return llm_action_interfaces::action::builder::Init_LLM_SendGoal_Request_goal_id();
}

}  // namespace llm_action_interfaces


namespace llm_action_interfaces
{

namespace action
{

namespace builder
{

class Init_LLM_SendGoal_Response_stamp
{
public:
  explicit Init_LLM_SendGoal_Response_stamp(::llm_action_interfaces::action::LLM_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::llm_action_interfaces::action::LLM_SendGoal_Response stamp(::llm_action_interfaces::action::LLM_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llm_action_interfaces::action::LLM_SendGoal_Response msg_;
};

class Init_LLM_SendGoal_Response_accepted
{
public:
  Init_LLM_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LLM_SendGoal_Response_stamp accepted(::llm_action_interfaces::action::LLM_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_LLM_SendGoal_Response_stamp(msg_);
  }

private:
  ::llm_action_interfaces::action::LLM_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::llm_action_interfaces::action::LLM_SendGoal_Response>()
{
  return llm_action_interfaces::action::builder::Init_LLM_SendGoal_Response_accepted();
}

}  // namespace llm_action_interfaces


namespace llm_action_interfaces
{

namespace action
{

namespace builder
{

class Init_LLM_GetResult_Request_goal_id
{
public:
  Init_LLM_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::llm_action_interfaces::action::LLM_GetResult_Request goal_id(::llm_action_interfaces::action::LLM_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llm_action_interfaces::action::LLM_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::llm_action_interfaces::action::LLM_GetResult_Request>()
{
  return llm_action_interfaces::action::builder::Init_LLM_GetResult_Request_goal_id();
}

}  // namespace llm_action_interfaces


namespace llm_action_interfaces
{

namespace action
{

namespace builder
{

class Init_LLM_GetResult_Response_result
{
public:
  explicit Init_LLM_GetResult_Response_result(::llm_action_interfaces::action::LLM_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::llm_action_interfaces::action::LLM_GetResult_Response result(::llm_action_interfaces::action::LLM_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llm_action_interfaces::action::LLM_GetResult_Response msg_;
};

class Init_LLM_GetResult_Response_status
{
public:
  Init_LLM_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LLM_GetResult_Response_result status(::llm_action_interfaces::action::LLM_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LLM_GetResult_Response_result(msg_);
  }

private:
  ::llm_action_interfaces::action::LLM_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::llm_action_interfaces::action::LLM_GetResult_Response>()
{
  return llm_action_interfaces::action::builder::Init_LLM_GetResult_Response_status();
}

}  // namespace llm_action_interfaces


namespace llm_action_interfaces
{

namespace action
{

namespace builder
{

class Init_LLM_FeedbackMessage_feedback
{
public:
  explicit Init_LLM_FeedbackMessage_feedback(::llm_action_interfaces::action::LLM_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::llm_action_interfaces::action::LLM_FeedbackMessage feedback(::llm_action_interfaces::action::LLM_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llm_action_interfaces::action::LLM_FeedbackMessage msg_;
};

class Init_LLM_FeedbackMessage_goal_id
{
public:
  Init_LLM_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LLM_FeedbackMessage_feedback goal_id(::llm_action_interfaces::action::LLM_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LLM_FeedbackMessage_feedback(msg_);
  }

private:
  ::llm_action_interfaces::action::LLM_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::llm_action_interfaces::action::LLM_FeedbackMessage>()
{
  return llm_action_interfaces::action::builder::Init_LLM_FeedbackMessage_goal_id();
}

}  // namespace llm_action_interfaces

#endif  // LLM_ACTION_INTERFACES__ACTION__DETAIL__LLM__BUILDER_HPP_
