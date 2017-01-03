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

#ifndef IROHA_ACCOUNT_HPP
#define IROHA_ACCOUNT_HPP

#include <string>

namespace object {
    
    class Account {

    public:
        std::string publicKey;
        std::string name;

        std::vector<
            std::tuple<std::string, long>
        > assets;

        explicit Account():
            publicKey(""),
            name("")
        {}

        explicit Account(
            std::string publicKey,
            std::string name,
            std::vector<
                std::tuple<std::string, long>
            > assets
        ):
            publicKey(std::move(publicKey)),
            name(std::move(name)),
            assets(std::move(assets))
        {}

        explicit Account(
            std::string publicKey,
            std::string name,
            std::tuple<std::string, long> asset
        ):
            publicKey(std::move(publicKey)),
            name(std::move(name))
        {
            assets.push_back(std::move(asset));
        }


        explicit Account(
            std::string publicKey,
            std::string name
        ):
            publicKey(std::move(publicKey)),
            name(std::move(name))
        {}




    };

};  // namespace asset

#endif //IROHA_ACCOUNT_HPP
