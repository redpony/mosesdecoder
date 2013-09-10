
## Redeem your AWS Promotional Coupon

Use [this link](https://aws.amazon.com/awscredits/) to redeem your promotional coupon or to create an account.

If you have not installed the EC2 command line tools, you should probably do so. You can check to make sure they have been installed with the following command:

    ec2-describe-regions

This will produce the following output if successful

    REGION	eu-west-1	ec2.eu-west-1.amazonaws.com
    REGION	sa-east-1	ec2.sa-east-1.amazonaws.com
    REGION	us-east-1	ec2.us-east-1.amazonaws.com
    REGION	ap-northeast-1	ec2.ap-northeast-1.amazonaws.com
    REGION	us-west-2	ec2.us-west-2.amazonaws.com
    REGION	us-west-1	ec2.us-west-1.amazonaws.com
    REGION	ap-southeast-1	ec2.ap-southeast-1.amazonaws.com
    REGION	ap-southeast-2	ec2.ap-southeast-2.amazonaws.com

## What AMI?

AMIs are basically virtual machine images. This tutorial assumes you will use one of [the official Ubuntu images](http://cloud-images.ubuntu.com/locator/ec2/).

### EBS or Instance Store?

EBS costs a bit more, but it lets you have a *persistent filesystem*, which means you will continue to have access to your same files each time you bring up your cluster. This is very useful for storing software, prebuilt translation and language models, and preprocessed corpora.

