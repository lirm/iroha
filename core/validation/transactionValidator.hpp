#ifndef CORE_VALIDATION_TRANSACTIONVALIDATOR_HPP_
#define CORE_VALIDATION_TRANSACTIONVALIDATOR_HPP_

namespace transactionValidator {
  bool isValid(Transaction const tx);
  bool signaturesAreValid(Transaction const tx);
};

#endif  // CORE_VALIDATION_TRANSACTIONVALIDATOR_HPP_
