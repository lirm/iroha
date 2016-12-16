/*
Copyright Soramitsu Co., Ltd. 2016 All Rights Reserved.
http://soramitsu.co.jp

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef CORE_DOMAIN_OBJECTS_MESSAGE_HPP_
#define CORE_DOMAIN_OBJECTS_MESSAGE_HPP_

#include <string>
#include <memory>

#include "../../service/json_parse.hpp"

namespace object {

class Message{

protected:
    std::string text;
public:
    explicit Message(const std::string& text);

    json_parse::Object dump();
    static json_parse::Rule getJsonParseRule();

};

};  // namespace message

#endif  // CORE_DOMAIN_OBJECTS_MESSAGE_HPP_

