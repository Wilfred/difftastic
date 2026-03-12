<?php

declare(strict_types=1);

namespace App\Service;

use App\Context\ServiceContext;

interface Handler
{
    public function handle(
        ServiceContext $context,
        int ...$ids,
    ) : void;
}
