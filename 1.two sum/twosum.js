var twoSum = function (nums, target) {
    for (let i = 0; i < nums.length; i++) {
        const num1 = nums[i];
        const complement = target - num1;

        for (let j = i + 1; j < nums.length; j++) {
            const num2 = nums[j];

            if (num2 === complement) {
                return [i, j];
            }
        }
    }
    return [];
};