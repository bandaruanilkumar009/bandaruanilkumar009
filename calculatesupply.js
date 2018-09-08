function calculateSupply(age, numPerDay) {
    var maxAge = 80;
    var totalNeeded = (numPerDay * 365) * (maxAge - age);
    var message = 'You will need ' + totalNeeded + ' cups of coffee to last you until the ripe old age of ' + maxAge;
    console.log(message);
  }
  calculateSupply(28, 2);
  calculateSupply(28, 2.5);
  calculateSupply(79.5, 2);//amount consumed for rest of the life (based on constant max age)